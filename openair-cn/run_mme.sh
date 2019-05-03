echo -ne "\033]0;MME\007" 
 
cd $SOURCES
 
cd openair-cn; source oaienv; cd scripts; 
 
./run_mme
