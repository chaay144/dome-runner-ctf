// SHA-256 hashes of the accepted flags
// q4 = flag{OLD_METRO_TUNNEL_B3}
// q5 = flag{LEAKED_GIT_TOKEN_9F3A}
const FLAG_HASHES = {
  q4: "d71034c1d1e7ac825ea8f53afd5ae37061f46898fcd2dc508afc7b90fbc8b449",
  q5: "f7140058d5cb1523843da940e15d9f546cd0961570ef4d7d6a5fce2103f77be8"
};

// Toggle hints
document.querySelectorAll(".hint-btn").forEach(btn => {
  btn.addEventListener("click", () => {
    const id = btn.getAttribute("data-target");
    const el = document.getElementById(id);
    el.hidden = !el.hidden;
    btn.textContent = el.hidden ? "Show hint" : "Hide hint";
  });
});

// Compute SHA-256
async function sha256Hex(str) {
  const enc = new TextEncoder();
  const buf = await crypto.subtle.digest("SHA-256", enc.encode(str));
  return Array.from(new Uint8Array(buf)).map(b => b.toString(16).padStart(2, "0")).join("");
}

async function checkFlag(key, inputId, resultId) {
  const guess = document.getElementById(inputId).value.trim();
  const result = document.getElementById(resultId);
  result.textContent = "Checking...";
  const hash = await sha256Hex(guess);
  if (hash === FLAG_HASHES[key]) {
    result.textContent = "Well done! ✅";
    result.className = "success";
  } else {
    result.textContent = "Wrong 🙁 Try again.";
    result.className = "error";
  }
}
