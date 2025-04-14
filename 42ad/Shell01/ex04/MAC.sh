#!/bin/sh
ip link | awk '/link\/ether/ {print $2}'
