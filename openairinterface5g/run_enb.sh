echo -ne "\033]0;EUE\007"
cd $SOURCES
cd openairinterface5g; source oaienv
#sudo ./cmake_targets/lte_build_oai/build/lte-softmodem -O ./targets/PROJECTS/GENERIC-LTE-EPC/CONF/enb.band7.tm1.25PRB.lmssdr.conf --rf-config-file ./targets/ARCH/LMSSDR/LimeSDR_above_1p8GHz_1v4.ini
sudo ./cmake_targets/lte_build_oai/build/lte-softmodem -O ./targets/PROJECTS/GENERIC-LTE-EPC/CONF/enb.band7.tm1.25PRB.lmssdr.conf --rf-config-file ./targets/ARCH/LMSSDR/LimeSDR_above_1p8GHz.ini
