#pragma once

#include "Core/Application.h"
#include "Scene/Scene.h"

class FSandboxApp : public FApplication
{
public:
	FSandboxApp(const FCommandLine& InCommandLine);
	~FSandboxApp() override;
private:
	TScope<FScene> Sahne;
};
