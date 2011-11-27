# Xcode Scripting Interface
Xcode Scripting Interface (XSI) is a tool to modify Xcode projects via command line. This is done with the help of an Xcode plugin (`XSIPlugin.xcplugin`) that gets commands from a CLI program (`xcodescript`) via inter process communication.

The current capabilities are very limit. You can add and remove a groups at the root level of your project. More will come!

XSI was developed and tested with Xcode 4.2.1.

## Usage

1. [Download Xcode Scripting Interface](https://github.com/downloads/larsxschneider/Xcode-Scripting-Interface/XcodeScriptingInterface.zip)

2. Unzip it.

3. Move `XSIPlugin.xcplugin` to `~/Library/Application Support/Developer/Shared/Xcode/Plug-ins/XSIPlugin.xcplugin

3. Move `xcodescript` to `/usr/local/bin/` (or anywhere else in your path)

4. Type `xcodescript --help`

## Build Instructions

You might want to make a [class dump](http://www.codethecode.com/projects/class-dump/) of the DevToolsCore framework of your development environment (there is a class dump in `Source/Libraries/DevToolsCoreHeader`):
 
`class-dump -H -S -I /Developer/Library/PrivateFrameworks/DevToolsCore.framework/DevToolsCore`

You need to install boost (e.g. via homebrew):
`brew install boost`

Open the Xcode project and build both targets.

## Contact

Lars Schneider <larsxschneider+xsi@gmail.com>


## License

Xcode Scripting Interface is available under the BSD license. See the LICENSE file for more info.
