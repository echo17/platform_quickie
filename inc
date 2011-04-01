. build/envsetup.sh
lunch salvage_incredible-userdebug
make clean
make -j`grep 'processor' /proc/cpuinfo | wc -l` otapackage
