# Challenge 8: Branch Mispredict
**Chapter:** CBD  
**Difficulty:** Hard (15 marks)

## Scenario
The CBD substation runs a validator that always rejects your attempts. The success path is guarded by a single **conditional jump**. Flip that jump or supply the correct input to make the program reveal the shutdown key.

## What you have
- A small validator program (`validator.c` / `validator.exe` if present)
- The binary prints either:
  - `Access denied`
  - or `Shutdown key: <the real key>`

## Your mission
1. Open the binary in **Ghidra** (or IDA/Cutter).  
2. Find the string **"Access denied"** (Search → For strings). Jump to XREFs to locate the code that prints it.  
3. In that function, just above the print, you’ll see a **compare** (from `strcmp`) and a **conditional jump** (`JNE` or `JE`).  
4. Two ways to solve:
   - **A. Discover the correct input:** you’ll also see the string the program compares against (that’s the key).  
   - **B. Patch the branch:** flip `JNE` ↔ `JE` so your input lands on the success path.

### Patching (Ghidra quick tips)
- In Listing view, select the `JNE` (opcode often `0x75`) or `JE` (`0x74`).
- Right-click → **Patch Instruction** → change to the opposite.
- File → **Export Program** to save a patched copy.

(Windows hex editor alternative: **HxD**. Change the one byte `0x75`↔`0x74` at the file offset Ghidra shows.)

## Expected output on success
