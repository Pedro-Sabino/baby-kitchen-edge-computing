# Baby Kitchen - Edge Computing

## 🎯 Objetivo
Reduzir o desperdício de mamadeiras em hospitais, sincronizando solicitações com a real necessidade do bebê. Essa etapa foca na parte de Edge Computing e sua integração com o sistema completo.

## 🧱 Arquitetura em Camadas

### 1. IoT
- **Microcontrolador:** Arduino UNO
- **Componente:** Botão físico no pino 2
- **Comunicação:** Envio via Serial para o back-end
- **Simulação:** Pedido de mamadeira ao apertar botão

### 2. Back-end
- **Plataforma:** Node-RED
- **Funções:** Recebe dados via Serial, registra pedidos
- **Fluxo:** Serial → Verificação → Histórico/Status

### 3. Aplicação
- **Interface:** Node-RED Dashboard
- **Funções:** Visualização dos pedidos em tempo real

## 📊 Diagrama de Arquitetura

- Arquivo se encontra na mesma pasta que este READ.ME

## ⚙️ Especificações Técnicas
- Arduino UNO
- Botão físico no pino 2
- Comunicação via Serial 9600 baud
- Node-RED v3.1

## 🧪 Simulação
Simulação do envio de dados do botão via Serial. Quando pressionado, envia "P" ao Node-RED.
