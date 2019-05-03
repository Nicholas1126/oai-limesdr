echo -ne "\033]0;HSS\007" 

cd $SOURCES

cd openair-cn; source oaienv; cd scripts; 

#貌似需要运行之前先清理一下数据库才行，否则可能导致设备无法入网，应该是个BUG
./hss_db_import 127.0.0.1 root 123 oai_db $SOURCES/opencells-mods/opencells_db.sql

./run_hss
