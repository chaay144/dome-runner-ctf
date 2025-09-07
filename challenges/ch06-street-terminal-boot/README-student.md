# Challenge 6 — Street Terminal Boot (Reverse Engineering — Easy)
**Chapter:** Slum  
**Marks:** 5

## Scenario
The resistance found an old maintenance terminal still running in the Slum. The Dome’s engineers left sensitive data **inside** the program. Inspect the binary to recover the shutdown password.

## What you get
- `terminal.bin` — small executable captured from the terminal.

## Goal
Find the secret **password** embedded in the program and submit it on the website (no `flag{...}` format required).

## Hint
- Run `strings terminal.bin` to search visible text.
- Or open it in **Ghidra** and browse **.rodata**.

## Expected answer (for your class demo)
**DOME_BOOT_OK_7F3A**
