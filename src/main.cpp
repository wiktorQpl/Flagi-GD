#include <Geode/Geode.hpp>
#include <Geode/modify/SimplePlayer.hpp>

using namespace geode::prelude;

struct FlagColor {
    cocos2d::ccColor3B color1;
    cocos2d::ccColor3B color2;
};

FlagColor getFlagColors(std::string const& flagName) {
    if (flagName == "Polska") return { {255, 255, 255}, {214, 40, 40} };
    if (flagName == "Ukraina") return { {0, 91, 187}, {255, 213, 0} };
    if (flagName == "Wlochy") return { {0, 146, 70}, {206, 43, 55} };
    if (flagName == "LGBT") return { {255, 0, 0}, {0, 0, 255} };
    return { {255, 255, 255}, {255, 255, 255} };
}

class $modify(MyPlayer, SimplePlayer) {
    void updatePlayerFrame() {
        SimplePlayer::updatePlayerFrame();
        auto selectedFlag = Mod::get()->getSettingValue<std::string>("selected-flag");
        if (selectedFlag != "Wylaczone") {
            FlagColor colors = getFlagColors(selectedFlag);
            this->setColor(colors.color1);
            this->setSecondColor(colors.colors.color2);
        }
    }
};
