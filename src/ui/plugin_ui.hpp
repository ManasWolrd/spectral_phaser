#pragma once

#include "pluginshared/component.hpp"
#include "pluginshared/preset_panel.hpp"

class EmptyAudioProcessor;

class PluginUi : public juce::Component {
public:
    static constexpr int kWidth = 320;
    static constexpr int kHeight = 200;

    explicit PluginUi(EmptyAudioProcessor& p);

    void resized() override;
    void paint(juce::Graphics& g) override;
private:
    void OnLayerSelect(size_t i);

    EmptyAudioProcessor& processor_;
    pluginshared::PresetPanel preset_;
    ui::CubeSelector phaser_layer_;

    ui::Switch enable_{"⚡"};
    ui::Dial pitch_{"pitch"};
    ui::Dial phase_{"phase"};
    ui::Dial morph_{"morph"};
    ui::Switch phasy_{"phasy"};
};
