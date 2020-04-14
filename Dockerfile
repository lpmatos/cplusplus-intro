ARG ALPINE_VERSION=3.11

FROM alpine:${ALPINE_VERSION} as BASE

LABEL maintainer="Lucca Pessoa da Silva Matos - luccapsm@gmail.com" \
        org.label-schema.version="1.0.0" \
        org.label-schema.release-data="2020-04-14" \
        org.label-schema.url="https://github.com/lpmatos/c++-intro" \
        org.label-schema.alpine="https://alpinelinux.org/" \
        org.label-schema.name="Intro C++"

FROM BASE

ENV HOME=/usr/src/code

RUN set -ex && \
    apk update && \
    apk add --no-cache --update \
      g++=9.2.0-r4 \
      bash=5.0.11-r1

WORKDIR ${HOME}

COPY [ "./code", "." ]
