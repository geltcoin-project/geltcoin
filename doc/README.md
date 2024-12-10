Geltcoin Core
=============

Setup
---------------------
Geltcoin Core is the original Geltcoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Geltcoin transactions, which requires approximately 22 gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Geltcoin Core, visit [geltcoin.org](https://geltcoin.org/).

Running
---------------------
The following are some helpful notes on how to run Geltcoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/geltcoin-qt` (GUI) or
- `bin/geltcoind` (headless)

### Windows

Unpack the files into a directory, and then run geltcoin-qt.exe.

### macOS

Drag Geltcoin Core to your applications folder, and then run Geltcoin Core.

### Need Help?

* See the documentation at the [Geltcoin Wiki](https://geltcoin.info/) for help and more information.
* Ask for help on [#geltcoin](https://webchat.freenode.net/#geltcoin) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#geltcoin).
* Ask for help on the [GeltcoinTalk](https://geltcointalk.io/) forums, in the [Technical Support board](https://geltcointalk.io/c/technical-support).

Building
---------------------
The following are developer notes on how to build Geltcoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/bitcoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Geltcoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.bitcoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [GeltcoinTalk](https://geltcointalk.io/) forums.
* Discuss general Geltcoin development on #geltcoin-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#geltcoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [bitcoin.conf Configuration File](bitcoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
