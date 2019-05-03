echo -ne "\033]0;SPGW\007" 

cd $SOURCES

cd openair-cn; source oaienv; cd scripts; 

sudo -E ./run_spgw
