# 2N-DESTROYER

**Master the powers of 2!**  
A simple C command-line quiz that challenges you to calculate powers of 2 from \(2^0\) to \(2^{10}\).

 

```
2N-DESTROYER | Version: 0.1.0
_______________________________
Enter 2^0: 1
Correct.
Enter 2^1: 2
Correct.
Enter 2^2: 4
Correct.
...
```

## 🚀 Features
- Interactive quiz for powers of 2 (\(2^0\) to \(2^{10}\))
- Instant feedback on correct/incorrect answers
- Input validation with error handling
- Infinite loop for repeated practice
- Lightweight single-file C program

## 📋 Quick Start
1. **Clone the repo:**
   ```bash
   git clone <your-repo-url>
   cd 2N-DESTROYER
   ```

2. **Compile:**
   ```bash
   gcc -o 2n-destroyer main.c -lm
   ```

3. **Run:**
   ```bash
   ./2n-destroyer
   ```

## 🎮 How to Play
- Program asks for \(2^0, 2^1, ..., 2^{10}\) (1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024)
- Enter your answer for each power
- Get instant "Correct." or "Wrong. Right answer is X." feedback
- Complete all 11 questions, then repeat!

## 🛠️ Technical Details
- **Language:** C99
- **Dependencies:** Standard C library + `math.h`
- **Input validation:** Handles non-integer input gracefully
- **Size:** Single 30-line source file

## 🔮 Future Plans
- High score tracking
- Timed challenges
- Larger exponents
- Multiple difficulty levels
- Leaderboards

## 📄 License
MIT License - feel free to use, modify, and distribute!

***

**Ready to destroy those powers of 2?**  
`gcc -o 2n-destroyer main.c -lm && ./2n-destroyer`
