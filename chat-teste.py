#Authors Micael & Dyessica
import logging
from telegram import Update
from telegram.ext import Updater, CommandHandler, MessageHandler, Filters, CallbackContext

# Configuração do token do seu bot (obtido do BotFather)
TOKEN = '6341817358:AAG4vQLIlxpTJcA39pfyfh9Yj4q1ia1jgm4'

# Configuração do nível de log
logging.basicConfig(format='%(asctime)s - %(name)s - %(levelname)s - %(message)s', level=logging.INFO)

# Função para responder quando "Cristo" for mencionado
def resposta_cristo(update: Update, context: CallbackContext):
    message = update.message.text.lower()
    if "cristo" in message:
        update.message.reply_text("Vive")

# Função para lidar com o comando /start
def start(update: Update, context: CallbackContext):
    update.message.reply_text("Olá! Eu sou um bot. Digite 'Cristo' e eu responderei 'Vive'.")

# Configuração do updater e dos handlers
def main():
    updater = Updater(TOKEN, use_context=True)
    dispatcher = updater.dispatcher

    # Adiciona o command handler para o comando /start
    dispatcher.add_handler(CommandHandler("start", start))

    # Adiciona o message handler para responder quando "Cristo" for mencionado
    dispatcher.add_handler(MessageHandler(Filters.text & ~Filters.command, resposta_cristo))

    # Inicia o bot
    updater.start_polling()
    updater.idle()

if __name__ == '__main__':
    main()
