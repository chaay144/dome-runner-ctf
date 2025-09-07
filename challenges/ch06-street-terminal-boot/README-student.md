# Challenge 6 — Street Terminal Boot (Reverse Engineering — Easy)
**Chapter:** Slum  
**Marks:** 5

## Scenario
The resistance found an old maintenance terminal still running in the Slum. The Dome’s engineers left sensitive data inside the program **without protection**. Inspect the binary to recover the shutdown password.

## What you get
- `terminal.bin` — a small executable captured from the terminal.

## Goal
Find the secret **password** embedded in the program and submit it on the website (no `flag{...}` format required).

## Hint
- Start with `strings terminal.bin` to search visible text.
- Or open it in **Ghidra** and browse the **.rodata** section.
- No user input is required; the password is just present in memory.

## Expected answer (for this exercise)
**Al@rmShutD0wn!7z**

> Educational note: In real CTFs you usually wouldn’t publish the answer here; we include it to show the complete workflow for your class demo.
