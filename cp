source build/envsetup.sh
sleep 1

# ------------------------------------------
# ------------------------------------------
# CHERRY-PICKS
# ------------------------------------------
# ------------------------------------------

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
croot
sleep 1

# ---------------------
# InCallUI
cd packages/apps/InCallUI
sleep 1
git fetch https://github.com/willl0344/android_packages_apps_InCallUI.git
sleep 1
###Color status bar and notif phone icons
git cherry-pick 10f237d66e3ec76f70a26128e802fe2dff6c56f5
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
#leep 1
croot
sleep 1


###
git cherry-pick 
sleep 1


export USE_CCACHE=1
sleep 1
ccache -M 75
