// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <behaviors.dtsi>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/keys.h>

&soft_off {
    hold-time-ms = <3000>;
};

&soft_off {
    /delete-property/ split-peripheral-off-on-press;
};

#define MIRYOKU_NAV_VI
