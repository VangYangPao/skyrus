Shared Libraries
================

## skyrusconsensus

The purpose of this library is to make the verification functionality that is critical to Skyrus's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `skyrusconsensus.h` located in  `src/script/skyrusconsensus.h`.

#### Version

`skyrusconsensus_version` returns an `unsigned int` with the API version *(currently at an experimental `0`)*.

#### Script Validation

`skyrusconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `skyrusconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `skyrusconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `skyrusconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/skyrus/bips/blob/master/bip-0016.mediawiki)) subscripts
- `skyrusconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/skyrus/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `skyrusconsensus_ERR_OK` - No errors with input parameters *(see the return value of `skyrusconsensus_verify_script` for the verification status)*
- `skyrusconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `skyrusconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `skyrusconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NSkyrus](https://github.com/NicolasDorier/NSkyrus/blob/master/NSkyrus/Script.cs#L814) (.NET Bindings)
- [node-libskyrusconsensus](https://github.com/bitpay/node-libskyrusconsensus) (Node.js Bindings)
- [java-libskyrusconsensus](https://github.com/dexX7/java-libskyrusconsensus) (Java Bindings)
- [skyrusconsensus-php](https://github.com/Bit-Wasp/skyrusconsensus-php) (PHP Bindings)
