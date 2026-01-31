# spectral phaser
spectral phaser  

## MacOS授权

```bash
sudo xattr -dr com.apple.quarantine /path/to/your/plugins/spectral_phaser.component
sudo xattr -dr com.apple.quarantine /path/to/your/plugins/spectral_phaser.vst3
sudo xattr -dr com.apple.quarantine /path/to/your/plugins/spectral_phaser.lv2
```
## 构建

```bash
git clone --recurse-submodules https://github.com/L-MODEL-TEST/l-model-plugin-template.git

# windows
cmake -G "Visual Studio 17 2022" -DCMAKE_BUILD_TYPE=Release -S . -B ./build

# linux
sudo apt update
sudo apt-get install libx11-dev libfreetype-dev libfontconfig1-dev libasound2-dev libxrandr-dev libxinerama-dev libxcursor-dev
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -S . -B ./build
cmake --build ./build --config Release

# macOS
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DCMAKE_OSX_ARCHITECTURES="x86_64;arm64" -S . -B ./build
cmake --build ./build --config Release
```
