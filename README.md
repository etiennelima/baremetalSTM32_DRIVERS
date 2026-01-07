# baremetalSTM32_DRIVERS

Este repositório contém meus aprendizados em **programação bare metal para STM32** (sem HAL/STM32Cube), focado em **criar drivers do zero** para a placa *Nucleo STM32F411RE*.  
O objetivo é registrar os estudos, disponibilizar exemplos de drivers e compartilhar conhecimento com outros desenvolvedores embarcados.

## Visão Geral

Este projeto é uma coleção de **drivers e exemplos escritos diretamente acessando registradores**, sem o uso de bibliotecas de alto nível como HAL ou CMSIS abstraídas.  
O foco principal é entender profundamente o funcionamento dos periféricos do microcontrolador STM32F411RE, aprendendo diretamente com o **Reference Manual**.

Programação *bare metal* significa:
- controle direto de registradores e periféricos
- código enxuto, sem camadas de abstração
- aprendizado profundo de arquitetura ARM Cortex-M e dos periféricos STM32

Esse estilo de programação é útil quando você quer footprint mínimo, máximo desempenho ou entender como tudo funciona “por baixo dos panos”. :contentReference[oaicite:0]{index=0}

## Estrutura do Repositório

Cada diretório contém um exemplo ou driver específico:


Os arquivos PDF incluem:
- RM0383 — *Reference Manual* para STM32F411CE
- Manual da placa Nucleo STM32
- Datasheet do microcontrolador

Esses documentos são essenciais para desenvolver drivers bare metal corretamente.

## Exemplos de Drivers / Conteúdos

Atualmente o repositório contém:

- Inicialização básica do MCU
- Debug com SWO/ITM
- Implementação de `printf` sem HAL
- Driver UART básico
- GPIO com leitura/escrita direta
- DMA simples de memória para memória

## Como Usar

1. Clone o repositório:

   ```bash
   git clone https://github.com/etiennelima/baremetalSTM32_DRIVERS.git
