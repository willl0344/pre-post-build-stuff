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
croot
sleep 1

# ---------------------
# vendor-slim
cd vendor/slim
sleep 1
git fetch https://github.com/willl0344/vendor_slim.git
sleep 1
###Keep devices stock DPI
git cherry-pick 48eb6295496d3e2e7425f59b036566d6dea66e7f
sleep 1
###Add screen recorder
git cherry-pick 33ebd99cbc14d148c0ddf7b979713384ff036b07
sleep 1
###(2/2) Remove Slim Center
git cherry-pick 43c90ec0fedd7806ca7a212fd2e8bf0e8184973c
sleep 1
###Remove Slim OTA version
git cherry-pick 763bd68d67ed921cc5a4a2cc043fef15ae903417
sleep 1
###(1/2) add omniswitch
git cherry-pick 1ba18709c6f8190a0605981c272d35c333a4a3e5
sleep 1
###Add omni launcher
git cherry-pick fc4539c9446ae4ba3a089921c357f977f10dd6f7
sleep 1
###W03 Slim 720 & 1080 boot animations
git cherry-pick af4bf7bfea74975d0b514a76833f2ee074b6856d
sleep 1
###Add some init.d scripts
git cherry-pick 7b864c9c3eab9ab3b028abb0beb997674f175b57
sleep 1
###Add a few Samsung media sounds
git cherry-pick d8a3f338a82b0f48107b718cefb84559a1cd8d72
sleep 1
###Add to build.prop script
git cherry-pick 944d11b55be459608a52fef7ab32016309f41339
sleep 1
croot
sleep 1

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
croot
sleep 1

# ---------------------
# hlte
cd device/samsung/hlte
sleep 1
git fetch https://github.com/willl0344/device_samsung_hlte.git
sleep 1
###Reduce autobrightness levels
git cherry-pick d435ae467707729ee578ffc949896147184f5b0b
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
