﻿+< ? xml version = "1.0" encoding = "utf-8" ? >
+<Project DefaultTargets = "Build" ToolsVersion = "14.0" xmlns = "http://schemas.microsoft.com/developer/msbuild/2003">
+<ItemGroup Label = "ProjectConfigurations">
+<ProjectConfiguration Include = "Debug|Win32">
+<Configuration>Debug< / Configuration>
+<Platform>Win32< / Platform>
+< / ProjectConfiguration>
+<ProjectConfiguration Include = "Release|Win32">
+<Configuration>Release< / Configuration>
+<Platform>Win32< / Platform>
+< / ProjectConfiguration>
+<ProjectConfiguration Include = "Debug|x64">
+<Configuration>Debug< / Configuration>
+<Platform>x64< / Platform>
+< / ProjectConfiguration>
+<ProjectConfiguration Include = "Release|x64">
+<Configuration>Release< / Configuration>
+<Platform>x64< / Platform>
+< / ProjectConfiguration>
+< / ItemGroup>
+<PropertyGroup Label = "Globals">
+<ProjectGuid>{E7BACA4A - 5B3C - 409E-86D5 - 26E25D4DF464}< / ProjectGuid>
+<RootNamespace>My21617< / RootNamespace>
+<WindowsTargetPlatformVersion>8.1< / WindowsTargetPlatformVersion>
+< / PropertyGroup>
+<Import Project = "$(VCTargetsPath)\Microsoft.Cpp.Default.props" / >
+<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|Win32'" Label = "Configuration">
+<ConfigurationType>Application< / ConfigurationType>
+<UseDebugLibraries>true< / UseDebugLibraries>
+<PlatformToolset>v140< / PlatformToolset>
+<CharacterSet>MultiByte< / CharacterSet>
+< / PropertyGroup>
+<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Release|Win32'" Label = "Configuration">
+<ConfigurationType>Application< / ConfigurationType>
+<UseDebugLibraries>false< / UseDebugLibraries>
+<PlatformToolset>v140< / PlatformToolset>
+<WholeProgramOptimization>true< / WholeProgramOptimization>
+<CharacterSet>MultiByte< / CharacterSet>
+< / PropertyGroup>
+<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|x64'" Label = "Configuration">
+<ConfigurationType>Application< / ConfigurationType>
+<UseDebugLibraries>true< / UseDebugLibraries>
+<PlatformToolset>v140< / PlatformToolset>
+<CharacterSet>MultiByte< / CharacterSet>
+< / PropertyGroup>
+<PropertyGroup Condition = "'$(Configuration)|$(Platform)'=='Release|x64'" Label = "Configuration">
+<ConfigurationType>Application< / ConfigurationType>
+<UseDebugLibraries>false< / UseDebugLibraries>
+<PlatformToolset>v140< / PlatformToolset>
+<WholeProgramOptimization>true< / WholeProgramOptimization>
+<CharacterSet>MultiByte< / CharacterSet>
+< / PropertyGroup>
+<Import Project = "$(VCTargetsPath)\Microsoft.Cpp.props" / >
+<ImportGroup Label = "ExtensionSettings">
+< / ImportGroup>
+<ImportGroup Label = "Shared">
+< / ImportGroup>
+<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Debug|Win32'">
+<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
+< / ImportGroup>
+<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Release|Win32'">
+<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
+< / ImportGroup>
+<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Debug|x64'">
+<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
+< / ImportGroup>
+<ImportGroup Label = "PropertySheets" Condition = "'$(Configuration)|$(Platform)'=='Release|x64'">
+<Import Project = "$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props" Condition = "exists('$(UserRootDir)\Microsoft.Cpp.$(Platform).user.props')" Label = "LocalAppDataPlatform" / >
+< / ImportGroup>
+<PropertyGroup Label = "UserMacros" / >
+<PropertyGroup / >
+<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|Win32'">
+<ClCompile>
+<WarningLevel>Level3< / WarningLevel>
+<Optimization>Disabled< / Optimization>
+<SDLCheck>true< / SDLCheck>
+< / ClCompile>
+<Link>
+<SubSystem>Console< / SubSystem>
+< / Link>
+< / ItemDefinitionGroup>
+<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Debug|x64'">
+<ClCompile>
+<WarningLevel>Level3< / WarningLevel>
+<Optimization>Disabled< / Optimization>
+<SDLCheck>true< / SDLCheck>
+< / ClCompile>
+< / ItemDefinitionGroup>
+<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Release|Win32'">
+<ClCompile>
+<WarningLevel>Level3< / WarningLevel>
+<Optimization>MaxSpeed< / Optimization>
+<FunctionLevelLinking>true< / FunctionLevelLinking>
+<IntrinsicFunctions>true< / IntrinsicFunctions>
+<SDLCheck>true< / SDLCheck>
+< / ClCompile>
+<Link>
+<EnableCOMDATFolding>true< / EnableCOMDATFolding>
+<OptimizeReferences>true< / OptimizeReferences>
+< / Link>
+< / ItemDefinitionGroup>
+<ItemDefinitionGroup Condition = "'$(Configuration)|$(Platform)'=='Release|x64'">
+<ClCompile>
+<WarningLevel>Level3< / WarningLevel>
+<Optimization>MaxSpeed< / Optimization>
+<FunctionLevelLinking>true< / FunctionLevelLinking>
+<IntrinsicFunctions>true< / IntrinsicFunctions>
+<SDLCheck>true< / SDLCheck>
+< / ClCompile>
+<Link>
+<EnableCOMDATFolding>true< / EnableCOMDATFolding>
+<OptimizeReferences>true< / OptimizeReferences>
+< / Link>
+< / ItemDefinitionGroup>
+<ItemGroup>
+<ClCompile Include = "loops.cpp" / >
+< / ItemGroup>
+<Import Project = "$(VCTargetsPath)\Microsoft.Cpp.targets" / >
+<ImportGroup Label = "ExtensionTargets">
+< / ImportGroup>
+< / Project>