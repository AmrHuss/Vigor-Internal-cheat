#ifndef BONEMAPPING_H
#define BONEMAPPING_H

#include <string>
#include <vector>

// Define the BoneMapping struct
struct BoneMapping {
    std::string source;
    std::string target;

    // Constructor to initialize the source and target strings
    BoneMapping(const std::string& src, const std::string& tgt)
        : source(src), target(tgt) {}

    // Optional: Default copy constructor and assignment operator (for safety)
    BoneMapping(const BoneMapping& other) = default;
    BoneMapping& operator=(const BoneMapping& other) = default;
};

// Declare the bones_map vector
extern std::vector<BoneMapping> bones_map;

// Function to find mapped bone
std::string FindMappedBone(const std::string& bone_name);

#endif // BONEMAPPING_H
