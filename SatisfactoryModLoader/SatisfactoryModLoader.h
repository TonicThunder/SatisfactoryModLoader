#pragma once
#include <tuple>
#include <string>
#include <iostream>
#include <filesystem>
#include <Windows.h>

static const char* modLoaderVersion = "0.1.1";
static const std::string targetVersion = "97236"; //CL of Satisfactory
static bool loadConsole = true;
static bool debugOutput = false;
static bool supressErrors = false;

void mod_loader_entry();
void read_config();
void cleanup();
