#!/bin/sh
[ "${TERM:-none}" = "linux" ] && \
    printf '%b' '\e]P0101010
                 \e]P1AE4630
                 \e]P28B807F
                 \e]P3929292
                 \e]P49E9F9F
                 \e]P5B0B0B0
                 \e]P6B9C1C2
                 \e]P7d9d9d9
                 \e]P8979797
                 \e]P9AE4630
                 \e]PA8B807F
                 \e]PB929292
                 \e]PC9E9F9F
                 \e]PDB0B0B0
                 \e]PEB9C1C2
                 \e]PFd9d9d9
                 \ec'
