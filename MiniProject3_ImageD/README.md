# Mini Project 3: Image Denoising

## Description
A C++ command-line program that denoises a grayscale image represented as a 2D matrix by applying a mean filter.

## How to Build
```
g++ src/denoise.cpp -o denoise
```

## How to Run
```
./denoise <input.txt> <output.txt> <filter> <iterations>
```
**Example:**
```
./denoise tests/test1_small.txt tests/output1.txt mean 1
```

## Design Notes
- Image is stored as `vector<vector<int>>`
- Mean filter averages each interior pixel over its 3x3 neighborhood
- Border policy: **ignore borders** — edge pixels are copied unchanged
- Output is clamped to [0,255] by integer truncation

## Demo Output
Input:
```
4 5
10 10 10 10 10
10 200 10 200 10
10 10 10 10 10
10 200 10 200 10
```
Output:
```
4 5
10 10 10 10 10
10 31 52 31 10
10 52 94 52 10
10 200 10 200 10
```

## Copilot Usage
- **What AI helped with:** Breaking down the mean filter logic, nested loop structure, and command-line argument parsing.
- **What I wrote/verified myself:** All code was written and verified manually. AI served as a guide, not a code generator.
- **One bug found/fixed:** Accidentally used `cout << endl` instead of `outFile << endl` when writing the output file, which meant newlines were printed to the terminal instead of the file. Fixed by changing to `outFile`.