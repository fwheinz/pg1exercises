#!/bin/sh

killall -9 main karel 2>/dev/null || true

LASTDIR=$(dirname $(echo /workspaces/$RepositoryName/*/*.c | xargs ls -at | head -n 1))

make -C $LASTDIR clean run &

