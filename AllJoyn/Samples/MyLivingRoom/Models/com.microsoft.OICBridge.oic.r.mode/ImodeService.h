//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace OICBridge { namespace oic { namespace r { namespace mode {

public interface class ImodeService
{
public:
    // Implement this function to handle requests for the value of the Modes property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<modeGetModesResult^>^ GetModesAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Modes property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<modeSetModesResult^>^ SetModesAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, Platform::String^ value);

    // Implement this function to handle requests for the value of the SupportedModes property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<modeGetSupportedModesResult^>^ GetSupportedModesAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the SupportedModes property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<modeSetSupportedModesResult^>^ SetSupportedModesAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, Platform::String^ value);

};

} } } } } } 