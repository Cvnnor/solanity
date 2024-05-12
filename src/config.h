#ifndef VANITY_CONFIG
#define VANITY_CONFIG

static int const MAX_ITERATIONS = 200000;
static int const STOP_AFTER_KEYS_FOUND = 100000;

// how many times a gpu thread generates a public key in one go
__device__ const int ATTEMPTS_PER_EXECUTION = 200000;

__device__ const int MAX_PATTERNS = 10;

// exact matches at the beginning of the address, letter ? is wildcard
__device__ static char const *prefixes[] = {
  "mintech",
  "mintecH",
  "minteCh",
  "minteCH",
  "mintEch",
  "mintEcH",
  "mintECh",
  "mintECH",
  "minTech",
  "minTecH",
  "minTeCh",
  "minTeCH",
  "minTEch",
  "minTEcH",
  "minTECh",
  "minTECH",
  "miNtech",
  "miNtecH",
  "miNteCh",
  "miNteCH",
  "miNtEch",
  "miNtEcH",
  "miNtECh",
  "miNtECH",
  "miNTech",
  "miNTecH",
  "miNTeCh",
  "miNTeCH",
  "miNTEch",
  "miNTEcH",
  "miNTECh",
  "miNTECH",
  "mIntech",
  "mIntecH",
  "mInteCh",
  "mInteCH",
  "mIntEch",
  "mIntEcH",
  "mIntECh",
  "mIntECH",
  "mInTech",
  "mInTecH",
  "mInTeCh",
  "mInTeCH",
  "mInTEch",
  "mInTEcH",
  "mInTECh",
  "mInTECH",
  "mINtech",
  "mINtecH",
  "mINteCh",
  "mINteCH",
  "mINtEch",
  "mINtEcH",
  "mINtECh",
  "mINtECH",
  "mINTech",
  "mINTecH",
  "mINTeCh",
  "mINTeCH",
  "mINTEch",
  "mINTEcH",
  "mINTECh",
  "mINTECH",
  "Mintech",
  "MintecH",
  "MinteCh",
  "MinteCH",
  "MintEch",
  "MintEcH",
  "MintECh",
  "MintECH",
  "MinTech",
  "MinTecH",
  "MinTeCh",
  "MinTeCH",
  "MinTEch",
  "MinTEcH",
  "MinTECh",
  "MinTECH",
  "MiNtech",
  "MiNtecH",
  "MiNteCh",
  "MiNteCH",
  "MiNtEch",
  "MiNtEcH",
  "MiNtECh",
  "MiNtECH",
  "MiNTech",
  "MiNTecH",
  "MiNTeCh",
  "MiNTeCH",
  "MiNTEch",
  "MiNTEcH",
  "MiNTECh",
  "MiNTECH",
  "MIntech",
  "MIntecH",
  "MInteCh",
  "MInteCH",
  "MIntEch",
  "MIntEcH",
  "MIntECh",
  "MIntECH",
  "MInTech",
  "MInTecH",
  "MInTeCh",
  "MInTeCH",
  "MInTEch",
  "MInTEcH",
  "MInTECh",
  "MInTECH",
  "MINtech",
  "MINtecH",
  "MINteCh",
  "MINteCH",
  "MINtEch",
  "MINtEcH",
  "MINtECh",
  "MINtECH",
  "MINTech",
  "MINTecH",
  "MINTeCh",
  "MINTeCH",
  "MINTEch",
  "MINTEcH",
  "MINTECh",
  "MINTECH",
};

#endif
