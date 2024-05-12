#ifndef VANITY_CONFIG
#define VANITY_CONFIG

static int const MAX_ITERATIONS = 200000;
static int const STOP_AFTER_KEYS_FOUND = 100000;

// how many times a gpu thread generates a public key in one go
__device__ const int ATTEMPTS_PER_EXECUTION = 200000;

__device__ const int MAX_PATTERNS = 10;

// exact matches at the beginning of the address, letter ? is wildcard
__device__ static char const *prefixes[] = {
  "mintch",
  "mintcH",
  "mintCh",
  "mintCH",
  "minTch",
  "minTcH",
  "minTCh",
  "minTCH",
  "miNtch",
  "miNtcH",
  "miNtCh",
  "miNtCH",
  "miNTch",
  "miNTcH",
  "miNTCh",
  "miNTCH",
  "mIntch",
  "mIntcH",
  "mIntCh",
  "mIntCH",
  "mInTch",
  "mInTcH",
  "mInTCh",
  "mInTCH",
  "mINtch",
  "mINtcH",
  "mINtCh",
  "mINtCH",
  "mINTch",
  "mINTcH",
  "mINTCh",
  "mINTCH",
  "Mintch",
  "MintcH",
  "MintCh",
  "MintCH",
  "MinTch",
  "MinTcH",
  "MinTCh",
  "MinTCH",
  "MiNtch",
  "MiNtcH",
  "MiNtCh",
  "MiNtCH",
  "MiNTch",
  "MiNTcH",
  "MiNTCh",
  "MiNTCH",
  "MIntch",
  "MIntcH",
  "MIntCh",
  "MIntCH",
  "MInTch",
  "MInTcH",
  "MInTCh",
  "MInTCH",
  "MINtch",
  "MINtcH",
  "MINtCh",
  "MINtCH",
  "MINTch",
  "MINTcH",
  "MINTCh",
  "MINTCH",
};

#endif
