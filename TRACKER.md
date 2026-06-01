# 🎯 Quant + CP Tracker — Readiness Over Activity

**What this is:** your daily *technical engine* — quant math/probability, competitive programming, and a light LeetCode safety net — run alongside your two bigger commitments. Research (#1) and RoBorregos (#3) live in their own space; **protect them first.** This file is what you open to know exactly what to do on the quant/CP side each day.

**North star:** quant-interview readiness (Jane Street / HRT) and strong national-level competitive programming (ICPC Gran Premio de México → Mexican Final), built on the probability and math that also feed your research.

---

## How to use this — the daily loop

A **repeatable loop**, not a dated calendar. You never "fall behind." You run the loop and advance the ladders.

**Every day — quant warmup (~15 min, tiny on purpose):**
- [ ] Zetamac, one round (`arithmetic.zetamac.com`). Log the score.
- [ ] One probability puzzle from Mosteller. Write the *reasoning*, not just the answer.

**The protected core — weekend (~3 hrs, never skip):**
- [ ] One virtual contest, timed, no distractions. CF Div 2 now; Div 1 / ICPC gym as you climb.
- [ ] **Upsolve immediately** — every problem you couldn't finish. This is where rating actually comes from.

**Weekday sessions — flexible (~45–60 min, as many as research/RoBorregos leave room for; two is a fine week):**
- [ ] Mostly: advance the CP ladder — study the technique, solve 1–2 problems at target difficulty, save reusable code to your library.
- [ ] One per week: a deeper probability/stats block (~45 min) — one topic, worked systematically.
- [ ] Short on time? One LeetCode pattern problem instead, to keep SWE reflexes warm.

**Weekly with RamCPP (~1×, can be your weekend contest):**
- [ ] One team contest (CF gym ICPC set), 3 people / 1 machine. Practice the role split and who-codes-what. ICPC is a team event — your placing is the three of you combined.

### A sample week — literally what to do each day
| Day | Warmup (15m) | Main block |
|---|---|---|
| Mon | Zetamac + puzzle | CP ladder (45–60m) |
| Tue | Zetamac + puzzle | research-heavy day → skip, or one LC pattern |
| Wed | Zetamac + puzzle | CP ladder (45–60m) |
| Thu | Zetamac + puzzle | Probability deep block (45m) |
| Fri | Zetamac + puzzle | flex / LC pattern / rest |
| Sat | Zetamac + puzzle | **Virtual contest (2–2.5h)** |
| Sun | Zetamac + puzzle | **Upsolve** + RamCPP team set + 10-min review |

The only sacred cells are Saturday's contest and Sunday's upsolve. Everything else flexes around research.

### Summer mode — when classes and research lighten
Same warmup, same ladders. The dial turns toward **contests** — the part the school year starves — not toward longer versions of each weekday.
- **Contests: 3–4 per week** (each still = timed virtual contest + full upsolve). Biggest change; this is where the rating jumps come from.
- **Drilling:** more problems per day from the same CSES list and probability ladder, filling the days between contests.
- **RamCPP:** scale up to a full **5-hour ICPC-style team contest** each week — the real format.
- **Warmup:** unchanged.
- **Volume:** ~20–30 hrs/week vs. the school year's ~8.

---

## The rules that actually move the needle
1. **Readiness > activity.** If your CF rating and mock trend aren't moving, change *what* you do — don't just do more.
2. **Difficulty:** solve problems ~100–200 above your *current* CF rating. Grinding easy problems feels good and teaches nothing.
3. **Upsolve everything.** The problems you *barely* missed are the entire growth zone.
4. **Redo only implementation misses.** Couldn't code a known idea cleanly → redo from scratch. The *idea* was the gap → understand, log, move on. No spaced-repetition quota — that was the dead weight in v3.
5. **Ceilings, not floors.** Targets are caps. A heavy research/robotics week → next week *shrinks*; it never expands to punish you.
6. **When time is tight, cut from the bottom:** LC-safety goes first, then weekday CP/quant volume. Keep the daily warmup, the weekend contest + upsolve, and research. Let RoBorregos expand and contract with its competition calendar.
7. **When real interviews/OAs hit, flip to interview mode** (see phases): mocks and targeted prep outrank raw practice volume.
8. **Log every miss** with the pattern and the reason. Patterns repeat — that's the gold.

---

## Track 1 — Quant: math, probability, mental speed (your edge)

The track that wins quant interviews, and the half you already love. Climb top to bottom; the daily puzzle + weekly deep block feed it.

### Mental math & estimation
- [ ] Zetamac daily. Milestones: comfortable **30/120s → strong 45 → elite 60+**.
- [ ] Fast tools: 2-digit ×/÷, percentages, fraction↔decimal, powers of 2, rough logs.
- [ ] Fermi estimation: quote a number with a defensible 30-second derivation.

### Probability — the core ladder
- [ ] Counting: permutations, combinations, overcounting traps, stars and bars
- [ ] Conditional probability, independence, **Bayes**, law of total probability
- [ ] Random variables: PMF/PDF/CDF, **expectation, variance, linearity of expectation, indicator variables**
- [ ] Distributions: Bernoulli, binomial, geometric (memorylessness), Poisson, uniform, exponential, normal — and *when each appears*
- [ ] Multivariate: joint/marginal/conditional, covariance, correlation, **conditional expectation, law of iterated expectation, law of total variance**
- [ ] Stochastic: **Markov chains** (stationary dist., hitting/absorption times), random walks, **gambler's ruin**, first-step analysis
- [ ] Advanced puzzle tools: generating functions, **optional stopping / martingale** intuition, Poisson processes, a little Brownian-motion intuition for derivatives-flavored desks

> The method that cracks most interview problems: **states + first-step analysis**, **linearity of expectation**, **conditioning**, and **symmetry** — reach for these before brute force.

### Statistics (for quant-research and data-heavy desks)
- [ ] Estimators, bias/variance tradeoff, **MLE**, method of moments
- [ ] **CLT**, confidence intervals, hypothesis testing (t-test, p-values, Type I/II)
- [ ] **Linear regression**: OLS, assumptions, interpretation, R²
- [ ] Time-series basics: stationarity, autocorrelation (trading flavor)

### Linear algebra (quant + ML overlap — doubles for research)
- [ ] Matrix multiply, rank, determinant, inverse
- [ ] **Eigenvalues/eigenvectors, SVD, positive-semidefinite matrices**
- [ ] Projections, least squares

### Trading games & decisions
- [ ] Expected value of bets; making and tightening a **bid/ask** around an estimate
- [ ] Updating on information / order flow; sequential decisions
- [ ] **Kelly criterion** intuition; variance vs. edge

### Quant resources
- *Fifty Challenging Problems in Probability* — Mosteller (start here)
- *A Practical Guide to Quantitative Finance Interviews* — Zhou (the "green book")
- *Heard on the Street* — Crack · *Quant Job Interview Questions and Answers* — Joshi
- *Introduction to Probability* — Blitzstein & Hwang (free **Stat 110** lectures) for foundations
- *All of Statistics* — Wasserman (fast, mathematical)
- Practice: **quantguide.io**, Zetamac

---

## Track 2 — Competitive Programming (toward ICPC national-qualifier level)

Anchor on your live CF rating (you look early-intermediate, ~1200–1500). Each phase assumes the one above. Math topics here overlap Track 1 — solving them twice is a feature.

### Phase A — Solidify the core (CF ~1200 → 1600)
- [ ] STL fluency, two pointers, sliding window
- [ ] Binary search (incl. on the answer)
- [ ] Prefix sums + difference arrays
- [ ] Sorting + greedy
- [ ] Number theory: modular arithmetic, fast exponentiation, gcd, sieve
- [ ] Combinatorics + recursion / backtracking
- [ ] Intro DP: 1D, knapsack, LIS, coin change, grid DP
- [ ] Graphs: BFS/DFS, components, topological sort, Dijkstra, DSU, MST
- *Source:* CSES Introductory + Sorting & Searching; first half of CSES Graph & DP

### Phase B — Intermediate (CF ~1600 → 1900)
- [ ] DP: interval, bitmask, on trees, digit DP
- [ ] Graphs: 0-1 BFS, Bellman-Ford, Floyd-Warshall, bipartite, SCC, bridges/articulation, Euler tour, LCA (binary lifting)
- [ ] Range queries: Fenwick (BIT), segment tree + lazy propagation, sparse table
- [ ] Math: modular inverse, nCr mod p, CRT, matrix exponentiation, inclusion-exclusion, **expected value** (shared with quant)
- [ ] Strings: hashing, KMP, Z-algorithm, tries
- *Source:* finish CSES DP / Graph / Range Queries / Tree Algorithms / Mathematics; Codeforces EDU

### Phase C — Advanced / regional stretch (CF ~1900 → 2200+)
*Beyond the national-qualifier target — Phases A + B are what get you there. Phase C is the stretch toward regional level and top placements; push into it during summers.*
- [ ] DP optimizations: convex hull trick, divide & conquer DP, Knuth, SOS DP
- [ ] Trees: heavy-light decomposition, centroid decomposition, small-to-large
- [ ] Strings: suffix array, suffix automaton, Aho-Corasick, Manacher
- [ ] Flows & matching: Dinic, min cut, Hopcroft-Karp, MCMF, Hall's theorem
- [ ] Geometry: convex hull, line intersection, rotating calipers, closest pair
- [ ] Advanced math: FFT/NTT, Möbius, Burnside, Gaussian elimination, Sprague-Grundy
- [ ] Advanced structures: persistent segment tree, Mo's algorithm, Li Chao tree, treap
- *Practice:* Gran Premio de México past sets, Latin American ICPC regional sets, Codeforces Div 1, AtCoder AGC

### CP resources
- **CSES Problem Set** (`cses.fi/problemset`) — your systematic spine
- **USACO Guide** (`usaco.guide`) — Bronze → Advanced, topic by topic
- **CP-Algorithms** (`cp-algorithms.com`) — implementation reference
- *Competitive Programmer's Handbook* — Laaksonen (free PDF)
- **Codeforces** (problemset by rating + tag, EDU, gym) · **AtCoder** (ABC for speed, AGC for depth)

---

## Track 3 — LeetCode / SWE safety net (light, "just in case")

Kept warm, not grinded. **Most of this is a subset of your CP skills**, so Phase A/B already maintains it — the LC-specific part is interview *communication* plus a few patterns. Scale up only if you pursue SWE internships or when interviews approach.

Pattern checklist (NeetCode 150 order — tick when you can solve the pattern cold):
- [ ] Arrays & Hashing · [ ] Two Pointers · [ ] Sliding Window · [ ] Stack
- [ ] Binary Search · [ ] Linked List · [ ] Trees · [ ] Tries · [ ] Heap / Priority Queue
- [ ] Backtracking · [ ] Graphs · [ ] Advanced Graphs · [ ] 1-D DP · [ ] 2-D DP
- [ ] Greedy · [ ] Intervals · [ ] Math & Geometry · [ ] Bit Manipulation

**Cold-start mock protocol** (use in interview windows, kept from v3): a problem you didn't pick, 35 min for one medium / 75–90 for a full loop, *verbalize* approach, data-structure choice, edge cases, complexity. Score Pass / Partial / Fail; track the trend, not a threshold.

---

## How the emphasis shifts over time

You're early in year 2. The loop stays the same; the *weighting* shifts as quant recruiting approaches — it opens **fall of year 3**.

| Phase | CP | Quant | LC-safety | Focus |
|---|---|---|---|---|
| Now → end of Yr 2 | **primary** (A→B) | core probability | passive (via CP) | climb CF rating; build probability foundation |
| Summer after Yr 2 | **primary** (B→C) | deepen + start puzzle books | light | scale contest volume; eye sophomore quant programs |
| Yr 3 — recruiting | maintain | **interview mode**: hard puzzles, mental math, market-making | **active** (OAs) | mocks; apply; probability books cover-to-cover |
| Yr 3 summer | light | on the job | — | quant internship |
| Yr 4 | light | light | as needed | return offer + PhD apps (research-driven, elsewhere) |

---

## Tracking — lightweight (replaces the entire old dashboard)

### Error Log — every miss
| Date | Problem | Pattern | Failure (bug / idea / edge / complexity / comms) | Fix | Redo? (only if implementation) |
|---|---|---|---|---|---|
|  |  |  |  |  |  |

### Contest Log
| Date | Contest | Solved / Total | Upsolved? | Rating Δ |
|---|---|---|---|---|
|  |  |  |  |  |

### Weak-topic queue — drill these next
| Topic | Surfaced by | Drilled? |
|---|---|---|
|  |  |  |

### Monthly readiness review (10 min, end of month)
- Is my Codeforces rating trending up?
- Are mock/contest results improving, or flat?
- Am I closing upsolves and implementation-redos, or letting them pile?
- Which single pattern caused the most misses — what do I drill next month?
- What gets cut next month if research or RoBorregos load rises?

---

*Technical engine only. Research (#1) and RoBorregos live in their own space — protect them first; this runs in the time that's left, and still compounds.*