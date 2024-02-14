#!/bin/sh

nice="$(date)"

case "$1" in
--popup)
    echo "$nice"
esac