![chatterinoLogo](https://user-images.githubusercontent.com/41973452/272541622-52457e89-5f16-4c83-93e7-91866c25b606.png)
Chatterino 2 [![GitHub Actions Build (Windows, Ubuntu, MacOS)](https://github.com/Chatterino/chatterino2/actions/workflows/build.yml/badge.svg?branch=master)](https://github.com/Chatterino/chatterino2/actions?query=workflow%3ABuild+branch%3Amaster) [![Cirrus CI Build (FreeBSD only)](https://api.cirrus-ci.com/github/Chatterino/chatterino2.svg?branch=master)](https://cirrus-ci.com/github/Chatterino/chatterino2/master) [![Chocolatey Package](https://img.shields.io/chocolatey/v/chatterino?include_prereleases)](https://chocolatey.org/packages/chatterino) [![Flatpak Package](https://img.shields.io/flathub/v/com.chatterino.chatterino)](https://flathub.org/apps/details/com.chatterino.chatterino)
============

Chatterino 2 is a chat client for [Twitch.tv](https://twitch.tv).

This chatterino is adjusted to revert some changes only working for windows 10/11
Use modifed qt6 linked below to make this version work

## Download

- Download the latest Chatterino 2 nightly build [here](https://github.com/Veatra/ChatterinoOldWindows/releases/download/nightly-build/chatterino-windows-old-x86-64-Qt-6.7.3.zip)
- Extract it into a folder
- Get modifed **qt 6.7.3** [here](https://github.com/crystalidea/qt6windows7/releases/tag/v6.7.3) (higher qt versions can crash)
- Extract into the same folder (overwriting it files), which was made for this chatterino




You might also need to install the [VC++ Redistributables](https://aka.ms/vs/17/release/vc_redist.x64.exe) from Microsoft if you do not have it installed already.  
If you still receive an error about `MSVCR120.dll missing`, then you should install the [VC++ 2013 Restributable](https://download.microsoft.com/download/2/E/6/2E61CFA4-993B-4DD4-91DA-3737CD5CD6E3/vcredist_x64.exe).

## Use
- Should start without error now and without crashing opening a channel or settings
- Found might be buggy for usernames and some things, try out one of the other installed (like Segoe U)
