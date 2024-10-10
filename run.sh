#!/bin/sh

killall -9 main karel 2>/dev/null || true

LASTDIR=$(dirname $(echo ~/pg1exercises/*/*.c | xargs ls -at | head -n 1))

make -C $LASTDIR run

