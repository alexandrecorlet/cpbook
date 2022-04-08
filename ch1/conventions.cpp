/*
 * Features thar are commonly used by cp programmers
 * for convenience, brevity, and coding speed.
 */

typedef long long ll;                                   // common data types
typedef pair<int, int> ii;                              // comments that are mixed
typedef vector<int> vi;                                 // in with code are placed
typedef vector<ii> vii;                                 // on the right side
memset(memo, -1, sizeof memo);                          // to init DP memo table
vi memo(n -1);                                          // alternative way
memset(arr, 0, sizeof arr);                             // to clear array of ints

// Frequently shortcuts used in both our C/C++ and Java code
// Shortcuts for "common" constants
const int INF = 1e9;                                    // 10^9 = 1B is < 2^31-1
const ll LLINF = 4e18;                                  // 4*10^18 is < 2^63-1
const double EPS = 1e-9;                                // a very small number
// Other shortcuts
++i;                                                    // to simplify i = i + 1;
ans = (a) ? b : c;                                      // ternary operator
ans += val;                                             // from ans = ans + val;
index = (index + 1) % n;                                // to right or back to 0
index = (index + n - 1) % n;                            // to left or back to n - 1
int ans = (int) ((double) d + 0.5);                     // for rounding
ans = min(ans, newComputation);                         // min/max shortcut

/*
 * some code use short circuit && (AND) and || (OR)
 * some code use structured bindings of C++17 for dealings with pairs/tuples
 * we don't use braces for 1 liner selection/repetition body
 * we use pass by reference (&) as far as possible
 */

