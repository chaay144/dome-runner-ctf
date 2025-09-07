# Challenge 7: Opcode Gate
**Chapter:** Industrial Park  
**Difficulty:** Medium (10 marks)

## Scenario
The Industrial Park gate binary doesn’t store the passphrase in plain text. It keeps an XOR-encoded array and decodes it at runtime before comparing with your input.

Your task: reverse or simulate that decode to recover the passphrase, then submit it on the CTF site.

## What to do
1. Look at the encoded bytes below and the XOR key.
2. Decode each byte with XOR key `0x13`.
3. The decoded text is the answer.

## Encoded bytes (hex)
52 50 50 56 40 40 4C 54 41 52 5D 47 56 57 4C 4B 5C 41


**XOR key (hex):** `13`

## Tools (any one is fine)
- CyberChef: “From Hex” → “XOR” (key 13 in hex)
- Python script (see `decode.py` in this folder)

## Expected answer format
A normal string (not `flag{}`), e.g.

ACCESS_GRANTED_XOR
