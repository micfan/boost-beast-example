# Boost Beast Example [![Build Status](https://travis-ci.org/micfan/boost-beast-example.svg?branch=master)](https://travis-ci.org/micfan/boost-beast-example)

* CMaked project the official example: 
[advanced_server.cpp](https://www.boost.org/doc/libs/develop/libs/beast/example/advanced/server/advanced_server.cpp)

* And support Google Protocol Buffers

* It can be a start-up project for your WebSocket application server


## Dependencies

- gcc (GCC) 8.2.1 20180831, or clang latest version

- cmake version 3.12.3

- [protobuf 3.7](https://www.archlinux.org/packages/extra/x86_64/protobuf/)

- boost latest version

## Build
```bash
git submodule update --init
mkdir build && cd build
cmake ..
make -j8
```

## App sample output

```bash
./cmake-build-debug/app/beast-app
[2019-05-10 21:23:54.490] [info] serving http://0.0.0.0:9999
[2019-05-10 21:23:54.490] [info] serving ws://0.0.0.0:9999
```
