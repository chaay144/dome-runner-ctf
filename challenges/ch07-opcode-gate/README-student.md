# Challenge 7: Opcode Gate
**Chapter:** Industrial Park  
**Difficulty:** Medium (10 marks)

## Scenario
The Dome locked the Industrial Park behind a digital gate. The validator binary doesn’t store the passphrase in plain text. Instead, it keeps an **XOR-encoded** array and decodes it at runtime before comparing with your input.

Your task: reverse the binary, reveal the passphrase, and submit it.

## Hint
- Find the **byte array** in the binary.
- Look for a **loop that XORs each byte with a fixed key** (e.g., `0x13`) to decode.
- Recreate the decode in Python/CyberChef to get the passphrase.

## Tools
- Ghidra (static RE), or IDA/Cutter  
- CyberChef (XOR) or Python to decode

## Submission format
Not a `flag{...}`. It’s a normal string like:
