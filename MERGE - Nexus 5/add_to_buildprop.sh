#!/sbin/sh
busybox echo "" >> /system/build.prop
busybox echo "ro.HOME_APP_ADJ = 1" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "debug.sf.hw = 1" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.media.enc.jpeg.quality=100" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.media.dec.jpeg.memcap=12000000" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.media.enc.hprof.vid.bps=12000000" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "debug.performance.tuning=1" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.max.fling_velocity=20000" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.min.fling_velocity=18000" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.min_pointer_dur=8" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "wifi.supplicant_scan_interval=300" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.kernel.android.checkjni=0" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.kernel.checkjni=0" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.config.nocheckin=1" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.mot.eri.losalert.delay=1000" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.tcp.buffersize.default=4096,87380,256960,4096, 16384,256960" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.tcp.buffersize.wifi=4096,87380,256960,4096,163 84,256960" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.tcp.buffersize.umts=4096,87380,256960,4096,163 84,256960" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.tcp.buffersize.gprs=4096,87380,256960,4096,163 84,256960" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.tcp.buffersize.edge=4096,87380,256960,4096,163 84,256960" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.telephony.call_ring.delay=0" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ring.delay=0" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.rmnet0.dns1=8.8.8.8" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.rmnet0.dns2=8.8.4.4" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.dns1=8.8.8.8" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "net.dns2=8.8.4.4" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.ril.enable.amr.wideband=1" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "windowsmgr.max_events_per_sec=300" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "persist.cust.tel.eons=1" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.verify-bytecode=false" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.execution-mode=int:fast" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.checkjni=false" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.dexopt-data-only=1" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.heapstartsize=8m" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.heapgrowthlimit=192m" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.heapsize=512m" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "dalvik.vm.execution-mode=int:jit" >> /system/build.prop
busybox echo "" >> /system/build.prop
busybox echo "ro.secure=0" >> /system/build.prop
busybox echo "" >> /system/build.prop
