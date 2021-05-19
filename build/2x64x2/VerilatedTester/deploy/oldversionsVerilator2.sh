#!/bin/bash
# {
#     sleep 10m
#     echo "terminate script"
#     kill $$
# } &
{
    VERSION=3.926
    LOGFILE=log_v3926_5.txt

echo "-- rm verilator"
cd /home/ulnor/.local/bin
rm verilator*
cd /home/ulnor/.local/share
rm -rf verilator*

echo "-- install another version of verilator"
cd /home/ulnor/Dokumente/micro_Kernel_project/verilator-$VERSION
autoconf
./configure --prefix=/home/ulnor/.local
make -j
make install

echo "-- CHECK if verilator is installed"
if [[ -f /home/ulnor/.local/bin/verilator ]]
then
    echo "-- verilator is installed"

    echo "-- open folder verilog"
    cd /home/ulnor/Dokumente/micro_Kernel_project/forked_bismo/bismo/build/2x64x2/VerilatedTester/deploy/verilog
    rm -rf verilated

    echo "-- execute verilator"
    ~/.local/bin/verilator -Iother-verilog --cc --prof-cfuncs TesterWrapper.v -Wno-assignin -Wno-fatal -Wno-lint -Wno-style -Wno-COMBDLY -Wno-STMTDLY --Mdir verilated --trace

    echo "-- copy verilated.cpp and verilated_vcd_c.cpp"
    cp -rf /home/ulnor/Dokumente/micro_Kernel_project/verilator-$VERSION/include/verilated.cpp /home/ulnor/Dokumente/micro_Kernel_project/forked_bismo/bismo/build/2x64x2/VerilatedTester/deploy/verilog/verilated
    cp -rf /home/ulnor/Dokumente/micro_Kernel_project/verilator-$VERSION/include/verilated_vcd_c.cpp /home/ulnor/Dokumente/micro_Kernel_project/forked_bismo/bismo/build/2x64x2/VerilatedTester/deploy/verilog/verilated
    cd ..

    rm libbismo_rt.so
    rm testapp
    echo "-- compile RTLIB"
    sh compile_rtlib.sh

    if [[ -f /home/ulnor/Dokumente/micro_Kernel_project/forked_bismo/bismo/build/2x64x2/VerilatedTester/deploy/libbismo_rt.so ]]
    then  
        echo "-- compile TESTAPP"
        sh compile_testapp.sh

        if [[ -f /home/ulnor/Dokumente/micro_Kernel_project/forked_bismo/bismo/build/2x64x2/VerilatedTester/deploy/testapp ]]
        then  
            echo "-- execute app"
            export LD_LIBRARY_PATH=/home/ulnor/Dokumente/micro_Kernel_project/forked_bismo/bismo/build/2x64x2/VerilatedTester/deploy
            ./testapp t > $LOGFILE
            echo "DONE"
        else
            echo "-- testapp is not compiled properly"
        fi
    fi
    
else
    echo "-- verilator is not installed"
    

fi

    echo " shut down"
    kill $$

}