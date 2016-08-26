#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "clang/Tooling/Tooling.h"
#include "llvm/Support/raw_ostream.h"

/// Returns RamFuzz tests for code.  On failure, returns "fail".
std::string ramfuzz(const std::string &code);

/// Runs RamFuzz action in a ClangTool.
///
/// @return the result of tool.run().
int ramfuzz(
    clang::tooling::ClangTool &tool, ///< Tool to run.
    const std::vector<std::string>
        &sources,            ///< Names of source files that tool will process.
    llvm::raw_ostream &outh, ///< Where to output generated declarations.
    llvm::raw_ostream &outc  ///< Where to output generated code.
    );
