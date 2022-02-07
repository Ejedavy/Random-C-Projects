##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=IntroductiontoProgramming_Lab_3
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :="C:/Users/ejeoh/Documents/Introduction to Programming"
ProjectPath            :="C:/Users/ejeoh/Documents/Introduction to Programming/IntroductiontoProgramming_Lab_3"
IntermediateDirectory  :=../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3
OutDir                 :=../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ejeoh
Date                   :=07/02/2022
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\IntroductiontoProgramming_Lab_3" mkdir "..\build-$(ConfigurationName)\IntroductiontoProgramming_Lab_3"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\IntroductiontoProgramming_Lab_3" mkdir "..\build-$(ConfigurationName)\IntroductiontoProgramming_Lab_3"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3/.d:
	@if not exist "..\build-$(ConfigurationName)\IntroductiontoProgramming_Lab_3" mkdir "..\build-$(ConfigurationName)\IntroductiontoProgramming_Lab_3"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ejeoh/Documents/Introduction to Programming/IntroductiontoProgramming_Lab_3/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/IntroductiontoProgramming_Lab_3/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


