#!/usr/bin/env bash

tr -d "\n" < "$1" | grep -o "$2" | wc -w
