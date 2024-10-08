#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H

/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */

// Mainnet
static const uint8_t chainparams_seed_main[] = {
    0x01,0x04,0x90,0xca,0x1c,0x0d,0x48,0x57, // 144.202.28.205
    0x01,0x04,0xd2,0x2c,0xa7,0xb7,0x57,0x45, // 45.76.167.242
    0x01,0x04,0xd8,0x20,0x36,0x57,0x4d,0x61  // 108.61.195.97
};

// Testnet
static const uint8_t chainparams_seed_test[] = {
    0x01,0x04,0x90,0xca,0x1c,0x0d,0x48,0x57, // 144.202.28.205
    0x01,0x04,0xd2,0x2c,0xa7,0xb7,0x57,0x45, // 45.76.167.242
    0x01,0x04,0xd8,0x20,0x36,0x57,0x4d,0x61  // 108.61.195.97
};

#endif // BITCOIN_CHAINPARAMSSEEDS_H

