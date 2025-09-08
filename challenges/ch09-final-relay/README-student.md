# Challenge 9: Power Station
**Chapter:** Power Station 
**Difficulty:** Hard (15 marks)

## Scenario
At the Power Station, the access program does **not store the password as plain text**. Instead, it reconstructs the expected string using an algorithm at runtime. Each element in a hidden number array is **offset by its index**, and the program reverses that math in a loop before comparing to your input.

Your job: **reverse the reconstruction** and recover the shutdown code.

---

## What you’ll see in reversing
- A numeric array in the binary (e.g., `uint8_t arr[] = { ... }`).
- A loop that builds a string with something like:
- Then the program does `strcmp(user_input, expected)` to accept or reject.

---

## Hints
- In **Ghidra**: search for strings around “Access denied” or “Shutdown code”.
- Cross-references (XREFs) will take you to the compare function where the loop lives.
- Recreate the loop yourself to extract the message.

---

## (Optional) Example decode (Python)
If you only have the array and the rule `expected[i] = arr[i] - i*3`, you can decode like this:
```python
arr = [70,76,84,74,88,110,100,90,100,92,119,128,121,117,118,124,115,126]
print(''.join(chr(arr[i] - i*3) for i in range(len(arr))))

FINAL_RELAY_UNLOCK
