# Lua Runner S60
### _Bringing the power of Lua scripting to Symbian OS with this minimalistic single-executable port of Lua 5.4.7_

\
_Important notes:_
 - This project serves as a foundation for further development and expansion
 - No changes made to Lua code - **"./group/lua_runner_s60.mmp"** handles required adaptations
 - Entry point of the project is **"./src/lua_runner_s60.cpp"**
 - Project can be compiled with both GCCE and RVCT
 - S60v3 FP2 SDK and PIPS 1.7.5 used for compiling ("**[s60_open_c_cpp_plug_in_v1_7_en.zip](https://archive.org/download/nokia_sdks_n_dev_tools)**" plugin is needed)

\
The project has no GUI, so no resource files needed for executing the EXE file directly from **"C:/sys/bin"**, **"D:/sys/bin"** or **"Z:/sys/bin"**.  

PIPS 1.7.5 is needed for project to work. S60v3-FP2 and later devices should have it built-in. To be able to work with console window you need STDIOSERVER to be installed on the device. 

Lua code is stored as 8000+ character string located in **"./src/lua_runner_s60.cpp"**, this is done for modders so they can change the embedded Lua code from compiled EXE. Using Petran compiled EXE file can be "unpacked" and edited using HEX editor. File operations from Lua script works as expected.

\
**Todo:**
 - good error handling with logging
 - implementing global UI elements so error/info notes could be shown
 - making DLL version for possiblily of extending other apps using Lua
 - making cross platform tool for embedding Lua scripts directly to executable for modders
