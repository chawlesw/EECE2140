# Testing Documentation

## How to Build
```
g++ src/denoise.cpp -o denoise
```

## How to Run Tests

### Test 1 — Small Matrix (Manual Verification)
```
./denoise tests/test1_small.txt tests/output1.txt mean 1
```
**Input:** 4x5 matrix with two bright pixels (200) surrounded by dark pixels (10).  
**Expected output:** Interior bright pixels averaged down to ~31 and ~52. Border pixels unchanged.

### Test 2 — Impulse Noise (Salt and Pepper)
```
./denoise tests/test2_impulse.txt tests/output2.txt mean 1
```
**Input:** 6x6 matrix of uniform 50s with random spikes of 0 and 255.  
**Expected output:** Spike values averaged down significantly toward 50. Border pixels unchanged.

### Test 3 — Border Behavior
```
./denoise tests/test3_border.txt tests/output3.txt mean 1
```
**Input:** 5x5 matrix with high contrast border (255) and dark interior (10).  
**Expected output:** Border pixels copied unchanged (255). Interior pixels averaged between 10 and 255 based on proximity to border.