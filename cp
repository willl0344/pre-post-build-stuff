source build/envsetup.sh
sleep 1

# ------------------------------------------
# ------------------------------------------
# CHERRY-PICKS
# ------------------------------------------
# ------------------------------------------

# ---------------------
# Build
cd build
sleep 1
git fetch https://github.com/willl0344/android_build.git
sleep 1
###W03ify updater-script
git cherry-pick cf7d29f4c98aec2b6dfaecd706a0ea8a148929d7
sleep 1
###updater-script: add to build prop script
git cherry-pick 89a7d961ddc95387a5f1a7c6cc6397fa5616a07d
sleep 1
###Set /lib/modules/ recursive 755 permissions
#git cherry-pick 1a81d1860af7cc79c43ccf343b42fc239685b817
#sleep 1
croot
sleep 1

# ---------------------
# vendor-slim
cd vendor/slim
sleep 1
git fetch https://github.com/willl0344/vendor_slim.git
sleep 1
###Add screen recorder
git cherry-pick 9b429eccff704068221f9ae74ec008da5572c0ec
sleep 1
###(2/2) Remove Slim Center
git cherry-pick 08432860cff1e479c30e998c904aff5101efa6b8
sleep 1
###Remove Slim OTA version
git cherry-pick 66f9ac5f73672096f5a82439a4d0c0d0f675522f
sleep 1
###(1/2) add omniswitch
git cherry-pick 007939b6b2f0664a07a07b3886fd47a109f74930
sleep 1
###Add omni launcher
git cherry-pick 9e0abc6328007e67067fdfc11567f4b28b329708
sleep 1
###W03 Slim 720 & 1080 boot animations
git cherry-pick 8a5716e7abbea7d3c128f194778e9dbbbf685143
sleep 1
###Add some init.d scripts
git cherry-pick d2b877579b6e7e5ca84ac1d1d04838fd252422dc
sleep 1
###Add a few Samsung media sounds
git cherry-pick 817eac4b92057e37b6b345e87a8d145649f846b4
sleep 1
###Add to build.prop script
git cherry-pick 6df9ee20d3c0e9d30dd6e6cdd85a5db60c7497a3
sleep 1
###Keep devices stock DPI
git cherry-pick 621e6c729d279ba139d67587a5263c22d74489fc
sleep 1
###apns-conf: Replace obsolete Luxgsm Internet with POST MMS & POST Internet
git cherry-pick b7c9a06ff8f9c485344a20a98987a4d9d4e95595
sleep 1
###lighten add to build prop script
git cherry-pick 81ca95b01f690b72239f9c681bf59519185013b2
sleep 1
croot
sleep 1

# ---------------------
# proprietary_vendor_samsung
#cd vendor/samsung
#sleep 1
#git fetch https://github.com/willl0344/proprietary_vendor_samsung.git
#sleep 1
###time daemon: use the right bin, fix time in recovery
#git cherry-pick bb050ee76071a7faf2a9c768469aa41793322ede
#sleep 1
#croot
#sleep 1

# ---------------------
# Frameworks base
cd frameworks/base
sleep 1
git fetch https://github.com/willl0344/frameworks_base.git
sleep 1
###Revert "fix number picker blue line and highlight" 
git cherry-pick 7c097af807e493b43f5c545c08fd722af959d114
sleep 1
croot
sleep 1


# ---------------------
# InCallUI
cd packages/apps/InCallUI
sleep 1
git fetch https://github.com/willl0344/packages_apps_InCallUI.git
sleep 1
###Color status bar and notif phone icons
git cherry-pick c197c40487d726c52545338971c34a6d0b05b400
sleep 1
###Incall UI from white to holo blue
git cherry-pick 80c6c7de69a10e56cff0378ddec20bf5d14cc89e
sleep 1
###Add an option in the InCall UI to perform call recording 
git cherry-pick 9a5cfdd4aa4daa27af776666422eb2466b375f77
sleep 1
###InCallUI: Enable Speaker on Proximity (3/3)
git cherry-pick 865d90118394d8cfaee90beb604320f24d24e458
sleep 1
croot
sleep 1

# ---------------------
# Dialer
cd packages/apps/Dialer
sleep 1
git fetch https://github.com/willl0344/packages_apps_Dialer.git
sleep 1
###Call recording service implementation, show recordings and allow play
git cherry-pick 502cdd366fd2205187387d3b10dbb92bfe093f04
sleep 1
croot
sleep 1

# ---------------------
# Telephony
cd packages/services/Telephony
sleep 1
git fetch https://github.com/willl0344/packages_services_Telephony.git
sleep 1
###Telephony: Dismissable voicemail notifications
git cherry-pick ac3cac0c11313f767978b1c8002bab6151c5dd2f
sleep 1
###Remove FC'ing Carrier settings 
git cherry-pick 2a2bd1039990e0d630d63d3eb64620169b043f05
sleep 1
###Pass creation time in Call interface so that we can uniquely identify
git cherry-pick ceaa174c972c552bd673a2251db0a3d6de596ce2
sleep 1
###Telephony: Enable Speaker on Proximity (2/3)
git cherry-pick eea2a3e475ab2a6f1a4e30f22ed790125a6560c6
sleep 1
croot
sleep 1

# ---------------------
# hlte
#cd device/samsung/hlte
#sleep 1
#git fetch https://github.com/willl0344/device_samsung_hlte.git
#sleep 1
###Reduce autobrightness levels
#git cherry-pick efaec519bf4d23cf3b827fafa99cf3b0ea47bfd8
#sleep 1
###Use Yank kernel config file
#git cherry-pick 4bdacb323af3a9c6a908d1c97c0278c92ac985ad
#sleep 1
###init.qcom.rc: import init.carrier.rc. Fix bluetooth permissions & wakelock
#git cherry-pick 53424e6d5c14043698367af6ca03e72650ac7c86
#sleep 1
###Hlte: Set call recording source to voice line
#git cherry-pick f84accada315191a56ebddee247c4f2f369a02b3
#sleep 1
###hlte: Enable call recording for uplink and downlink 
#git cherry-pick 98e5ca81f194a7d0a92ed1555c52d0e68fbb8305
#sleep 1
###Hlte: Raise video recording volume 
#git cherry-pick 3581837ba63bd9544fa03e8b8d468095a39904db
#sleep 1
###Do not start mpdecision at boot
#git cherry-pick 4573ed2da047fe986d166589bc0262e3496d1a0e
#sleep 1
###Deadline default scheduler
#git cherry-pick 9a25ac24f51451ac4e5c99a56baff77192426fff
#sleep 1
#croot
#sleep 1

# ---------------------
# frameworks native
cd frameworks/native
sleep 1
git fetch https://github.com/willl0344/frameworks_native.git
sleep 1
###Add 3GB dalvik heap and hwui memory
git cherry-pick a5386435e3ee5754c8c2ac9cdcc5c47b9d0139fe
sleep 1
croot
sleep 1

######################


###
git cherry-pick 
sleep 1

export USE_CCACHE=1
sleep 1
ccache -M 100
