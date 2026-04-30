# miniproject_ai_prime
Miniproject created with only autocomplete deepseek-coder-v2 continue extension and qwen3.6 27B with cline agentic

Some comment for a commit to make sure everything is ok with rights

Failure note:

Refactor the code so that it works with 128 bit uints. make sure it works with both clang and gcc, and that no overflow occurs. in the main function write some chrono measurements of integers of size 32bit 64bit and 96bit.

Too complex, also misunderstood the size of 96bit and at first actually tested with 2^96. 


Another failure note:

Do you know  of an algorithm that is deterministic, works for numbers between the 2^80 and 2^110 range in a reasonable time, if yes could you implement it here by only using stl and gcc clang default extensions?

It wanted deterministic miller rabin in plan mode, then realised he is not sure that it is fine for big numbers, so wanted an other algo, which became too complex for act mode...


Another failure note:

Create a plan to refactor isPrime using AKS algorithm. Plan out the functions necessary. Keep each function as small as possible. Dont use any external library.

Took way too long and some functions were suspiciously wrong...